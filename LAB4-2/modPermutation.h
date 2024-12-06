#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include <locale>
#include <map>
#include <algorithm>
#include <iostream>

/**
 * @class modPermutationCipher
 * @brief Класс для реализации шифра перестановки с ключом.
 *
 * Этот класс предоставляет функциональность для шифрования и расшифрования текста
 * на основе алгоритма перестановки с использованием числового ключа.
 */
class modPermutationCipher {
private:
    std::wstring alphabet; ///< Алфавит, используемый для шифрования (русские и английские буквы).
    std::vector<int> key;  ///< Ключ шифрования в виде вектора целых чисел.

public:
    /**
     * @brief Конструктор класса.
     * 
     * Инициализирует объект с заданным ключом.
     * @param skey Ключ для шифрования в формате строки.
     * @throws std::invalid_argument Если ключ некорректен.
     */
    modPermutationCipher(const std::wstring& skey);

    /**
     * @brief Метод для шифрования текста.
     * @param open_text Открытый текст для шифрования.
     * @return std::wstring Зашифрованный текст.
     */
    std::wstring encrypt(const std::wstring& open_text);

    /**
     * @brief Метод для расшифрования текста.
     * @param cipher_text Шифрованный текст для расшифрования.
     * @return std::wstring Расшифрованный текст.
     */
    std::wstring decrypt(const std::wstring& cipher_text);

    /**
     * @brief Проверяет корректность ключа.
     * @param key Ключ для проверки.
     * @throws std::invalid_argument Если ключ некорректен.
     */
    void validateKey(const std::wstring& key);

    /**
     * @brief Проверяет корректность текста.
     * @param text Текст для проверки.
     * @throws std::invalid_argument Если текст некорректен.
     */
    void validateText(const std::wstring& text);
};
